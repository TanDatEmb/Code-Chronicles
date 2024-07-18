import employee_manager

employee_manager.add_employee("John Doe", 35, "IT")
employee_manager.add_employee("Jane Smith", 28, "HR")
print(f"Total employees: {employee_manager.get_employee_count()}")
print(employee_manager.get_employee_info("John Doe"))
employee_manager.remove_employee("Jane Smith")