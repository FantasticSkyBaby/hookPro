//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface TBMURLActionHandlerConfigurationItem : NSObject
{
    NSRegularExpression *_regularExpression;	// 8 = 0x8
    NSString *_exactURLPath;	// 16 = 0x10
    NSString *_regexURLPattern;	// 24 = 0x18
    NSString *_handlerObjectString;	// 32 = 0x20
    NSArray *_handlerArguments;	// 40 = 0x28
}

@property(readonly, nonatomic) NSArray *handlerArguments; // @synthesize handlerArguments=_handlerArguments;
@property(readonly, nonatomic) NSString *handlerObjectString; // @synthesize handlerObjectString=_handlerObjectString;
@property(readonly, nonatomic) NSString *regexURLPattern; // @synthesize regexURLPattern=_regexURLPattern;
@property(readonly, nonatomic) NSString *exactURLPath; // @synthesize exactURLPath=_exactURLPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSRegularExpression *regularExpression;
- (_Bool)canHandleURL:(id)arg1;
- (id)hostAndPathWithURL:(id)arg1;
- (id)description;
- (id)initWithURLHandlerConfiguration:(id)arg1;

@end
