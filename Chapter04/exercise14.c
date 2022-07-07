/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief:
 * @Date:  2022.06.28
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */


====================================
(a) a * b - c * d + e
解释: 
(a * b) - (c * d) + e
((a * b) - (c * d)) + e
(((a * b) - (c * d)) + e)

====================================
(b) a / b % c / d
解释:
(a / b) % c / d
((a / b) % c) / d
(((a / b) % c) / d)

====================================
(c) - a - b + c - + d
解释:
(-a) - b + c - (+d)
((-a) - b) + c - (+d)
(((-a) - b) + c) - (+d)
((((-a) - b) + c) - (+d))

====================================
(d) a * -b / c - d
解释:
a * (-b) / c - d
(a * (-b)) / c - d
((a * (-b)) / c) - d
(((a * (-b)) / c) - d)