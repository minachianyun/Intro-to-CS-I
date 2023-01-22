"""
Exam 1
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

while True:
    try:
        window = int(input())
        width = int(input())
        height = int(input())
        frame_size = int(input())
        floor = int(input())
        sign = str(input())
        def draw_window(window, width, height, frame_size):
            c1, c2 = sign * (window * width), (sign * frame_size + " " * (width - frame_size * 2) + sign * frame_size) * window
            for i in range(height):
                if i < frame_size or i >= height - frame_size:
                    print(c1)
                else:
                    print(c2)
        for i in range(floor):
            draw_window(window, width, height, frame_size)
    except:
        break









