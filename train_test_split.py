import os
import shutil
import tqdm

data_dir = "skin_burn_dataset/augmented"
save_dir = "skin_burn_dataset/data"

img_save_dir = os.path.join(save_dir, "images")
txt_save_dir = os.path.join(save_dir, "labels")

img_train_dir = os.path.join(img_save_dir, "train")
txt_train_dir = os.path.join(txt_save_dir, "train")
img_test_dir = os.path.join(img_save_dir, "test")
txt_test_dir = os.path.join(txt_save_dir, "test")
img_val_dir = os.path.join(img_save_dir, "valid")
txt_val_dir = os.path.join(txt_save_dir, "valid")

train = 0.8
val = 0.1
test = 0.1

total_pic_cnt = 0

#find the number of pictures
for f in os.listdir(data_dir):
    if f.endswith(".jpg") or f.endswith(".png"):
        total_pic_cnt += 1

print(total_pic_cnt)

total_train = int(total_pic_cnt * train)
total_test = int(total_pic_cnt * test)
total_val = total_pic_cnt - total_train - total_test

pbar = tqdm.tqdm(total=total_pic_cnt*2)
pic_cnt = 0

print("number of pictures in the training set: {}".format(total_train))
print("number of pictures in the testing set: {}".format(total_test))
print("number of pictures in the validation set: {}".format(total_val))

def is_image(f):
    return f.endswith(".jpg") or f.endswith(".png")

for f in os.listdir(data_dir):
    if(is_image(f)):
        pic_cnt += 1
    if(pic_cnt <= total_train):
        if(is_image(f)):
            shutil.move(os.path.join(data_dir, f), os.path.join(img_train_dir, f))
        else:
            shutil.move(os.path.join(data_dir, f), os.path.join(txt_train_dir, f))
    elif(pic_cnt <= total_train + total_test):
        if(is_image(f)):
            shutil.move(os.path.join(data_dir, f), os.path.join(img_test_dir, f))
        else:
            shutil.copy(os.path.join(data_dir, f), os.path.join(txt_test_dir, f))
    else:
        if(is_image(f)):
            shutil.move(os.path.join(data_dir, f), os.path.join(img_val_dir, f))
        else:
            shutil.move(os.path.join(data_dir, f), os.path.join(txt_val_dir, f))
    pbar.update(1)

pbar.close()