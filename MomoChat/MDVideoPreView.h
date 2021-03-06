//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, MDMovieFile, MDWeakProxy, NSString, UIImageView;

@interface MDVideoPreView : UIView
{
    double delta;
    long long _status;
    _Bool _needHiddenCover;
    int _hiddenCoverCounter;
    _Bool _shouldRepeat;
    UIImageView *_coverView;
    NSString *_path;
    CADisplayLink *_displayLink;
    MDMovieFile *_movie;
    MDWeakProxy *_proxy;
}

@property(retain, nonatomic) MDWeakProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) MDMovieFile *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)addObservers;
- (void)displayNextFrame;
- (void)displayLinkCallback:(id)arg1;
- (void)doStop;
- (void)doPause;
- (void)doPlay;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)resetPath:(id)arg1;
- (void)resetToDefault;
- (void)setupDisplayLink;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

