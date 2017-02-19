//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;
@protocol WXMessengerNotifyDelegate;

@interface WXMessenger : NSObject
{
    int _messengerAppId;	// 8 = 0x8
    int _messengerDevType;	// 12 = 0xc
    id <WXMessengerNotifyDelegate> _notifyDelegate;	// 16 = 0x10
    NSString *_accountPrefix;	// 24 = 0x18
    NSUserDefaults *_loginDefaults;	// 32 = 0x20
    NSString *_lastLoginPassword;	// 40 = 0x28
    NSString *_loginAccont;	// 48 = 0x30
    NSString *_loginName;	// 56 = 0x38
}

+ (const char *)specialUTF8String:(id)arg1;
+ (id)sharedMessenger;
@property(copy, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(copy, nonatomic) NSString *loginAccont; // @synthesize loginAccont=_loginAccont;
@property(copy, nonatomic) NSString *lastLoginPassword; // @synthesize lastLoginPassword=_lastLoginPassword;
@property(retain, nonatomic) NSUserDefaults *loginDefaults; // @synthesize loginDefaults=_loginDefaults;
@property(nonatomic) int messengerDevType; // @synthesize messengerDevType=_messengerDevType;
@property(nonatomic) int messengerAppId; // @synthesize messengerAppId=_messengerAppId;
@property(copy, nonatomic) NSString *accountPrefix; // @synthesize accountPrefix=_accountPrefix;
@property(nonatomic) __weak id <WXMessengerNotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void).cxx_destruct;
- (void)forwardContact:(id)arg1 toEHelper:(id)arg2 delegate:(id)arg3;
- (void)requestEHelpServiceModeWithDelegate:(id)arg1;
- (void)changeEHelpServiceMode:(int)arg1 delegate:(id)arg2;
- (void)requestTokenForType:(int)arg1 userData:(id)arg2 withDelegate:(id)arg3;
- (void)cancleRequestWithSequenceId:(unsigned int)arg1;
- (void)clearLocationInfoWithDelegate:(id)arg1;
- (unsigned int)shakeForContactsWithLongitude:(double)arg1 andLatitude:(double)arg2 delegate:(id)arg3;
- (unsigned int)searchPersonsNearByWithLongitude:(double)arg1 andLatitude:(double)arg2 delegate:(id)arg3;
- (unsigned int)getRecommendContactsWithDelegate:(id)arg1;
- (unsigned int)serchFriendWithType:(int)arg1 andLongitude:(double)arg2 andLatitude:(double)arg3 delegate:(id)arg4;
- (void)removeContactFromBlacklistWithMD5Phone:(id)arg1 delegate:(id)arg2;
- (void)removeFromBlacklistWithId:(id)arg1 delegate:(id)arg2;
- (void)addContactToBlacklistWithId:(id)arg1 delegate:(id)arg2;
- (void)requesetContactBlacklistWithBlacklistNum:(unsigned int)arg1 andTimeStamp:(unsigned int)arg2 delegate:(id)arg3;
- (void)moveContact:(id)arg1 toGroup:(long long)arg2 delegate:(id)arg3;
- (void)modifyContactCommentName:(id)arg1 newName:(id)arg2 delegate:(id)arg3;
- (void)removeContactsWithIds:(id)arg1 delegate:(id)arg2;
- (void)removeContactWithId:(id)arg1 delegate:(id)arg2;
- (void)responseForAddContactRequest:(id)arg1 withWXContactResponseType:(int)arg2 withMessage:(id)arg3 delegate:(id)arg4;
- (void)addContactWithId:(id)arg1 toGroup:(long long)arg2 byAnswerQuestion:(id)arg3 delegate:(id)arg4;
- (void)addContactWithId:(id)arg1 toGroup:(long long)arg2 withMessage:(id)arg3 delegate:(id)arg4;
- (void)addContactWithId:(id)arg1 toGroup:(long long)arg2 delegate:(id)arg3;
- (void)addContactWithId:(id)arg1 byAnswerQuestion:(id)arg2 delegate:(id)arg3;
- (void)addContactWithId:(id)arg1 withMessage:(id)arg2 delegate:(id)arg3;
- (void)addContactWithId:(id)arg1 delegate:(id)arg2;
- (void)addContactWithId:(id)arg1 reqType:(int)arg2 message:(id)arg3 group:(long long)arg4 delegate:(id)arg5;
- (void)addContactToGroup:(long long)arg1 withMD5Phone:(id)arg2 verifyMessage:(id)arg3 delegate:(id)arg4;
- (void)addContactToGroup:(long long)arg1 withMD5Phone:(id)arg2 verifyAnswer:(id)arg3 delegate:(id)arg4;
- (void)addContactToGroup:(long long)arg1 withMD5Phone:(id)arg2 delegate:(id)arg3;
- (void)addContactWithMD5Phone:(id)arg1 verifyMessage:(id)arg2 delegate:(id)arg3;
- (void)addContactWithMD5Phone:(id)arg1 verifyAnswer:(id)arg2 delegate:(id)arg3;
- (void)addContactWithMD5Phone:(id)arg1 delegate:(id)arg2;
- (void)addContactWithMD5Phone:(id)arg1 reqType:(int)arg2 message:(id)arg3 group:(long long)arg4 delegate:(id)arg5;
- (void)deleteGroupByBatchGroupId:(id)arg1 delegate:(id)arg2;
- (void)changeParentGroupWithInfo:(id)arg1 delegate:(id)arg2;
- (void)changeGroupNameWithInfo:(id)arg1 delegate:(id)arg2;
- (void)addGroupWithName:(id)arg1 andParentGroupId:(long long)arg2 delegate:(id)arg3;
- (void)requestContactsGroupInfosWithTimeStamp:(unsigned int)arg1 delegate:(id)arg2;
- (void)requesetContactsWXFriendFlagWithContactIds:(id)arg1 delegate:(id)arg2;
- (void)requestContactsListInfosWithContactNum:(unsigned int)arg1 andTimeStamp:(unsigned int)arg2 andListType:(int)arg3 delegate:(id)arg4;
- (void)sendGreetingCard:(id)arg1 withDelegate:(id)arg2;
- (void)sendBroadcast:(id)arg1 withDelegate:(id)arg2;
- (void)sendRequestToSplitText:(id)arg1;
- (void)sendAckMessage:(id)arg1;
- (void)replyInvitationOfTribe:(id)arg1 withDelegate:(id)arg2 info:(id)arg3;
- (void)fetchMembersOfWWTribe:(id)arg1 withDelegate:(id)arg2 info:(id)arg3;
- (void)fetchTribeInfoWithId:(id)arg1 delegate:(id)arg2 info:(id)arg3;
- (void)fetchWangwangTribesWithDelegate:(id)arg1 info:(id)arg2;
- (void)sendTribeRequestWithDelegate:(id)arg1 info:(id)arg2;
- (void)getServerContactsReadTimestamp:(unsigned int)arg1 withDelegate:(id)arg2;
- (void)sendBatchContactsReadTimestamp:(id)arg1 withDelegate:(id)arg2;
- (void)sendContactReadTimestamp:(id)arg1 andTimeStamp:(unsigned int)arg2 withDelegate:(id)arg3;
- (void)sendCheckAuthCode:(id)arg1 authCode:(id)arg2;
- (void)sendAckForOfflineMsgWithLastTime:(long long)arg1;
- (void)fetchOfflineMessageWithCount:(unsigned long long)arg1 lastTime:(long long)arg2 withDelegate:(id)arg3;
- (void)sendConfirmMessage:(id)arg1 toReceiver:(id)arg2 withStatus:(int)arg3 delegate:(id)arg4;
- (void)sendTribeMessage:(id)arg1 withDelegate:(id)arg2;
- (_Bool)sendMultiChatMessage:(id)arg1 withDelegate:(id)arg2;
- (_Bool)sendMyselfMessage:(id)arg1 withDelegate:(id)arg2;
- (_Bool)sendMessage:(id)arg1 withDelegate:(id)arg2;
- (void)sendSyncScreenMessage:(id)arg1 withDelegate:(id)arg2;
- (struct SMsgItem)msgItemFromStackMsg:(id)arg1;
- (void)sendInputStatus:(int)arg1 toUser:(id)arg2;
- (void)loginToServer:(id)arg1 withUsername:(id)arg2 password:(id)arg3 pwdType:(int)arg4 checkCode:(id)arg5 checkCodeUrl:(id)arg6 extraData:(id)arg7 siteName:(id)arg8;
- (void)unInitInet;
- (void)logout;
- (void)disconnnectFromServer;
- (void)loginWithUser:(id)arg1 havanaToken:(id)arg2;
- (void)loginWithUser:(id)arg1 trustInfo:(id)arg2;
- (void)loginWithUser:(id)arg1 SSOToken:(id)arg2 context:(id)arg3;
- (void)loginWithCheckCode:(id)arg1 checkCodeUrl:(id)arg2;
- (void)loginWithUser:(id)arg1 token:(id)arg2;
- (void)loginWithUser:(id)arg1 password:(id)arg2;
- (id)getServerAddressWithUsername:(id)arg1 password:(id)arg2;
- (void)changeCurrentUserStatus:(int)arg1 preStatus:(int)arg2;
- (void)setClientVersion:(id)arg1;
- (void)setAppId:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)onLoginFailed:(id)arg1;
- (void)onLoginSuccessByTaobao:(id)arg1;
- (void)onUpdateData:(id)arg1;
- (void)onReLoginSuccess:(id)arg1;
- (void)onLoginSuccess:(id)arg1;
- (void)onLogining:(id)arg1;
- (void)unreg4Notification;
- (void)reg4Notification;
- (void)dealloc;
- (id)init;

@end
