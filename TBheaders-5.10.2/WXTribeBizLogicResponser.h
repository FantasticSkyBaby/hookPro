//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXBizLogicResponserBase.h"

#import "WXHttpRequestManagerDelegate-Protocol.h"
#import "WXMessengerResponseDelegate-Protocol.h"

@class NSString;

@interface WXTribeBizLogicResponser : WXBizLogicResponserBase <WXMessengerResponseDelegate, WXHttpRequestManagerDelegate>
{
}

- (void)didGetUserSetting:(id)arg1 andError:(id)arg2;
- (void)didUpdateUserSettingWithError:(id)arg1 errorObj:(id)arg2;
- (void)didUpdateName:(id)arg1 orBulletin:(id)arg2 ofTribe:(id)arg3 withError:(id)arg4;
- (void)didDisbandTribe:(id)arg1 withError:(id)arg2;
- (void)didExitFromTribe:(id)arg1 withError:(id)arg2;
- (void)didExpelMember:(id)arg1 fromTribe:(id)arg2 withError:(id)arg3;
- (void)didJoinToTribe:(id)arg1 withError:(id)arg2;
- (void)didInviteMembers:(id)arg1 toTribe:(id)arg2 withError:(id)arg3;
- (void)didCreateTribe:(id)arg1 tribeType:(long long)arg2 tribeName:(id)arg3 bulletin:(id)arg4 withError:(id)arg5;
- (void)didReplyInvitationOfTribe:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)didFetchMembers:(id)arg1 ofTribe:(id)arg2 withError:(id)arg3;
- (void)didFetchInfo:(id)arg1 ofTribe:(id)arg2 withError:(id)arg3;
- (void)didFetchTribeList:(id)arg1 withError:(id)arg2;
- (void)didSendTribeMessage:(id)arg1 withError:(id)arg2;
- (id)parseTribeInfoDatas:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
