import os
import tqdm

cnt = 0

data_dir = "skin_burn_dataset/orig"
test_dir = os.path.join(data_dir, "test")
train_dir = os.path.join(data_dir, "train")
val_dir = os.path.join(data_dir, "valid")

test_img_dir = os.path.join(test_dir, "images")
test_txt_dir = os.path.join(test_dir, "labels")
train_img_dir = os.path.join(train_dir, "images")
train_txt_dir = os.path.join(train_dir, "labels")
val_img_dir = os.path.join(val_dir, "images")
val_txt_dir = os.path.join(val_dir, "labels")

save_dir = "skin_burn_dataset/archive"

for f in os.listdir(save_dir):
    os.remove(os.path.join(save_dir,f))

total_len = len(os.listdir(test_img_dir)) + len(os.listdir(test_txt_dir)) + len(os.listdir(train_img_dir)) + len(os.listdir(train_txt_dir)) + len(os.listdir(val_img_dir)) + len(os.listdir(val_txt_dir))
pbar = tqdm.tqdm(total=total_len)

for f in os.listdir(test_img_dir):
    if(f.endswith(".jpg")):
        os.rename(os.path.join(test_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".jpg")

    elif(f.endswith(".png")):
        os.rename(os.path.join(test_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".png")
         
    f = f.replace(".jpg", ".txt")
    f = f.replace(".png", ".txt")
    os.rename(os.path.join(test_txt_dir, f), os.path.join(save_dir, "img"+str(cnt))+".txt")
    cnt += 1
    pbar.update(2)

for f in os.listdir(train_img_dir):
    if(f.endswith(".jpg")):
        os.rename(os.path.join(train_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".jpg")
    elif(f.endswith(".png")):
        os.rename(os.path.join(train_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".png")
    f = f.replace(".jpg", ".txt")
    f = f.replace(".png", ".txt")
    os.rename(os.path.join(train_txt_dir, f), os.path.join(save_dir, "img"+str(cnt))+".txt")
    cnt += 1
    pbar.update(2)

for f in os.listdir(val_img_dir):
    if(f.endswith(".jpg")):
        os.rename(os.path.join(val_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".jpg")
    elif(f.endswith(".png")):
        os.rename(os.path.join(val_img_dir, f), os.path.join(save_dir, "img"+str(cnt))+".png")
    f = f.replace(".jpg", ".txt")
    f = f.replace(".png", ".txt")
    os.rename(os.path.join(val_txt_dir, f), os.path.join(save_dir, "img"+str(cnt))+".txt")
    cnt += 1
    pbar.update(2)

print("Done")