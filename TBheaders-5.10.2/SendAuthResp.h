//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString;

@interface SendAuthResp : BaseResp
{
    NSString *code;	// 24 = 0x18
    NSString *state;	// 32 = 0x20
    NSString *lang;	// 40 = 0x28
    NSString *country;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (void)dealloc;
- (id)init;

@end
