//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatBaseViewController.h"

#import "ChatViewDelegate.h"
#import "MDUserProfileHelperDelegate.h"

@class ChatStatusView, MDSingleChatNoticeView, MDUserProfileHelper, MUAlertBar, NSDictionary, NSString;

@interface MDChatSingleViewController : MDChatBaseViewController <ChatViewDelegate, MDUserProfileHelperDelegate>
{
    _Bool _isFeedBack;
    _Bool _isQuietCheck;
    _Bool _validRelation;
    _Bool _specialFriendShowed;
    NSDictionary *_helloNoticeDict;
    long long _todayMessageCount;
    MUAlertBar *_specialFriendTipView;
    MDSingleChatNoticeView *_singleChatNoticeView;
    ChatStatusView *_chatStatusView;
    MDUserProfileHelper *_userProfileHelper;
}

@property(retain, nonatomic) MDUserProfileHelper *userProfileHelper; // @synthesize userProfileHelper=_userProfileHelper;
@property(retain, nonatomic) ChatStatusView *chatStatusView; // @synthesize chatStatusView=_chatStatusView;
@property(retain, nonatomic) MDSingleChatNoticeView *singleChatNoticeView; // @synthesize singleChatNoticeView=_singleChatNoticeView;
@property(retain, nonatomic) MUAlertBar *specialFriendTipView; // @synthesize specialFriendTipView=_specialFriendTipView;
@property(nonatomic) _Bool specialFriendShowed; // @synthesize specialFriendShowed=_specialFriendShowed;
@property(nonatomic) _Bool validRelation; // @synthesize validRelation=_validRelation;
@property(nonatomic) long long todayMessageCount; // @synthesize todayMessageCount=_todayMessageCount;
@property(nonatomic) _Bool isQuietCheck; // @synthesize isQuietCheck=_isQuietCheck;
@property(nonatomic) _Bool isFeedBack; // @synthesize isFeedBack=_isFeedBack;
@property(retain, nonatomic) NSDictionary *helloNoticeDict; // @synthesize helloNoticeDict=_helloNoticeDict;
- (void).cxx_destruct;
- (id)chatBar;
- (void)postGotoFollowUserSuccess:(id)arg1;
- (void)refreshUIAfterFollowSuccess;
- (void)userHelper:(id)arg1 follow:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)clickNewAddFriend; //关注
- (void)checkIfShowGuideFollwTipView;
- (void)resetCommonTopBar:(id)arg1 topBarType:(long long)arg2;
- (void)updateCloseActivityBannerTime;
- (void)addWarnView;
- (void)didFinishSpecialFriendRequest:(_Bool)arg1;
- (void)prepareForSpecialFriendTipView;
- (void)specialFriendTipClicked;
- (void)checkIfNeedShowSpecialFriendTipView;
- (void)beforeClickChatWidgetDelegate;
- (void)refreshWidget;
- (void)checkIfNeedShowSingleChatNoticeView;
- (void)delayStartAnimation;
- (void)didStatusTypeResponse:(id)arg1;
- (void)clearUnRead;
- (void)showMenu:(struct CGRect)arg1 messageId:(id)arg2;
- (_Bool)canShowAudioKeyBord;
- (void)chatInputBarSendContent:(id)arg1;
- (void)back;
- (void)rightItemClicked:(id)arg1;
- (void)handleGrowingLog;
- (unsigned long long)currentCate;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithTargetid:(id)arg1 msgid:(id)arg2;
- (id)initWithTargetid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
