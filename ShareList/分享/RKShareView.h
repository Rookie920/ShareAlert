//
//  BaseShareView.h
//  ShareList
//
//  Created by YunBao on 2018/1/16.
//  Copyright © 2018年 Rookie. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  弹出框样式
 */
typedef NS_ENUM(NSInteger, SGActionViewStyle){
    SGActionViewStyleLight = 0,     // 浅色背景，深色字体
    SGActionViewStyleDark           // 深色背景，浅色字体
};

typedef void(^SGMenuActionHandler)(NSInteger index);

@interface RKShareView : UIView

/**
 *  弹出框样式
 */
@property (nonatomic, assign) SGActionViewStyle style;

/**
 *  获取单例
 */
+ (RKShareView *)sharedActionView;

/**
 *    服务网格弹出层
 *
 *    @param     title       标题
 *    @param     itemTitles     元素标题
 *    @param     images      元素图标
 *    @param     handler     回调，元素index从 1 开始，0 为取消。
 */
+ (void)showGridMenuWithTitle:(NSString *)title
                   itemTitles:(NSArray *)itemTitles
                       images:(NSArray *)images
               selectedHandle:(SGMenuActionHandler)handler;

@end
