//
//  LeePhotoOrAlbumImagePicker.h
//  WSUserSDK_Example
//
//  Created by 侯力 on 2020/8/3.
//  Copyright © 2020 leohou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/PhotosDefines.h>
#import <Photos/PHPhotoLibrary.h>
#import <AVFoundation/AVFoundation.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef void (^LeePhotoOrAlbumImagePickerBlock)(UIImage *image);
@interface LeePhotoOrAlbumImagePicker : NSObject
// 必须创建一个对象才行，才不会释放指针
// 必须先在使用该方法的控制器中初始化 创建这个属性，然后在对象调用如下方法

/**
 公共方法 选择图片后的图片回掉
 
 @param controller 使用这个工具的控制器
 @param photoBlock 选择图片后的回掉
 */
- (void)getPhotoAlbumOrTakeAPhotoWithController:(UIViewController *)controller photoBlock:(LeePhotoOrAlbumImagePickerBlock)photoBlock;



//- (void)selectImagePicker:(UIImagePickerControllerSourceType)soureType withTakeAPhotoWithController:(UIViewController *)controller withCompletion:(ResultImageHandler)completion;

@end

NS_ASSUME_NONNULL_END
