//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MMPatternLockMgrExt <NSObject>

@optional
- (void)onPatternLockSvrCheckStatusBack:(unsigned long long)arg1;
- (void)onPatternLockSvrCheckStatusFail;
- (void)onClosePatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onModifyPatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onVerifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onVerifyPatternLockPwdError;
- (void)onSetupNewPatternLockPwdFail;
- (void)onSetupNewPatternLockPwdSuccess;
@end
