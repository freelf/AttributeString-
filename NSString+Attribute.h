//
//  NSString+Attribute.h
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AttrbuteStyle.h"
@interface NSString (Attribute)
/**
 *  根据styles数组创建出富文本
 *
 *  @param styles AttributedStyle对象构成的数组
 *
 *  @return 富文本
 */
-(NSAttributedString *)creatAttributedStringWithStyles:(NSArray *)styles;
@end
