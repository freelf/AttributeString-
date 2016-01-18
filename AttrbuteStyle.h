//
//  AttrbuteStyle.h
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface AttrbuteStyle : NSObject
@property(nonatomic,copy)NSString *attributeName;
@property(nonatomic,strong)id value;
@property(nonatomic)NSRange range;
/**
 *  便利构造器
 *
 *  @param attributeName 属性名字
 *  @param value         设置的值
 *  @param range         取值范围
 *
 *  @return 实例对象
 */
+(AttrbuteStyle *)attributeName:(NSString *)attributeName value:(id)value range:(NSRange)range;
@end
