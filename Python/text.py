
import cv2
my_photo = cv2.imread('MyPhoto.jpg')
cv2.imshow('MyPhoto', my_photo)

#Подготовим новые размеры
final_wide = 200
r = float(final_wide) / my_photo.shape[1]
dim = (final_wide, int(my_photo.shape[0] * r))

# уменьшаем изображение до подготовленных размеров
resized = cv2.resize(my_photo, dim, interpolation = cv2.INTER_AREA)
cv2.imshow("Resized image", resized)
cv2.waitKey(0)

cv2.destroyAllWindows()
