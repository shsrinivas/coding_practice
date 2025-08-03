class Patients:
    def __init__(self, name, age, BP, Temperature, Weight, decease = "Unknown"):
        self.name = name
        self.age = age
        self.decease = decease
        self.BP = BP
        self.Temperature = Temperature
        self.Weight = Weight

    def print_initial_info(self):
        patient_info =  f"Patient name {self.name} of {self.age} is diagnosed with {self.decease} is having Temperature of {self.Temperature} and weight of {self.Weight}"
        return patient_info

Patient1 = Patients("Shreya", 27, "Normal", 98, 68)

print(Patient1.print_initial_info())
Patient1.decease = "Appendicitis"
print(Patient1.print_initial_info())

