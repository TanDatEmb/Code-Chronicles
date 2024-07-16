import logging

def log_decorator(func):
    def wrapper(*args, **kwargs):
        logging.info(f"Calling function '{func.__name__}' with arguments {args} and {kwargs}")
        result = func(*args, **kwargs)
        logging.info(f"Function '{func.__name__}' returned {result}")
        return result
    return wrapper

@log_decorator
def say_hello(name):
    return f"Hello, {name}!"

say_hello("Alice")
