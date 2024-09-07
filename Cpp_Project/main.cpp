#include <iostream>
#include <vector>
#include <functional>
#include <string>

class TestFramework {
public:
    typedef std::function<void()> TestFunction;

    static TestFramework& GetInstance() {
        static TestFramework instance;
        return instance;
    }

    void RegisterTest(const std::string& name, TestFunction testFunction) {
        tests.push_back({name, testFunction});
    }

    void RunTests() {
        for (const auto& test : tests) {
            std::cout << "Running test: " << test.name << std::endl;
            try {
                test.testFunction();
                std::cout << "  Test passed" << std::endl;
            } catch (const std::exception& ex) {
                std::cerr << "  Test failed: " << ex.what() << std::endl;
            }
        }
    }

private:
    struct TestCase {
        std::string name;
        TestFunction testFunction;
    };

    std::vector<TestCase> tests;
};

#define TEST(name) \
    void Test_##name(); \
    static struct Test_##name##_Register { \
        Test_##name##_Register() { \
            TestFramework::GetInstance().RegisterTest(#name, Test_##name); \
        } \
    } test_##name##_register; \
    void Test_##name()

// Example usage:
TEST(MyTest) {
    int a = 5;
    int b = 7;
    if (a + b != 12) {
        throw std::runtime_error("Math error");
    }
}

TEST(AnotherTest) {
    std::string str = "Hello, world!";
    if (str.length() != 13) {
        throw std::runtime_error("String length error");
    }
}

int main() {
    TestFramework::GetInstance().RunTests();
    return 0;
}

