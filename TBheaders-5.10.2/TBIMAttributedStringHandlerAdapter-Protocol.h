//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString, TBIMTextMessageStyle;

@protocol TBIMAttributedStringHandlerAdapter <NSObject>
- (struct CGSize)sizeOfAttributeText:(NSAttributedString *)arg1 withMessageStyleKey:(NSString *)arg2;
- (NSAttributedString *)parserStringContent:(NSAttributedString *)arg1 withMessageStyleKey:(NSString *)arg2 withCustomParser:(NSArray *)arg3;
- (TBIMTextMessageStyle *)messageStyleVersionWithKey:(NSString *)arg1;
- (void)addTextMessageStyle:(TBIMTextMessageStyle *)arg1 withKey:(NSString *)arg2;
@end
