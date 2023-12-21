import matplotlib.pyplot as plt

subject = ['phy', 'chem', 'bio']
my_marks = [80, 76, 90]
f_marks = [70, 90, 56]

plt.plot(subject, my_marks, label='my-marks', color='green', marker='o', markerfacecolor='red')
plt.plot(subject, f_marks, label='f-marks', color='pink', marker='o', markerfacecolor='red')
plt.xlabel('subjects')
plt.ylabel('marks')
plt.title('Marks Comparison')
plt.legend()
plt.show()