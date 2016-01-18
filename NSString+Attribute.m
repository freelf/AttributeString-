//
//  NSString+Attribute.m
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "NSString+Attribute.h"

@implementation NSString (Attribute)
-(NSAttributedString *)creatAttributedStringWithStyles:(NSArray *)styles{
    if (self.length == 0) {
        return nil;
    }
    NSMutableAttributedString *string = [[NSMutableAttributedString alloc]initWithString:self];
    for (AttrbuteStyle *style in styles) {
        [string addAttribute:style.attributeName
                       value:style.value
                       range:style.range];
    }
    return string;
}
@end
