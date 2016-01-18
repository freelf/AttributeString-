//
//  FontStyle.m
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "FontStyle.h"

@implementation FontStyle
+(id)withFont:(UIFont *)font range:(NSRange)range{
    id style = [super attributeName:NSFontAttributeName
                              value:font
                              range:range];
    return style;
}
@end
