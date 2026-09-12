
# marks_grading.py

marks = int(input("Enter your marks: "))

if marks > 90:
    print("A")
elif 81 <= marks <= 90:
    print("B")
elif 71 <= marks <= 80:
    print("C")
elif 61 <= marks <= 70:
    print("D")
else:
    print("Fail")
