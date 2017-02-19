//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "JHSLuaViewProtocol-Protocol.h"

@class ALAPullRefreshAdapter, LView, NSString;

@interface JHSCollectionView : UICollectionView <JHSLuaViewProtocol>
{
    _Bool _isLoading;	// 8 = 0x8
    LView *_luaView;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CDUnknownBlockType _prTriggeredBlock;	// 32 = 0x20
    ALAPullRefreshAdapter *_pullRefreshAdapter;	// 40 = 0x28
}

@property(retain, nonatomic) ALAPullRefreshAdapter *pullRefreshAdapter; // @synthesize pullRefreshAdapter=_pullRefreshAdapter;
@property(copy, nonatomic) CDUnknownBlockType prTriggeredBlock; // @synthesize prTriggeredBlock=_prTriggeredBlock;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) LView *luaView; // @synthesize luaView=_luaView;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)buildPullToRefreshView;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)initSelf;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
