//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AgoraRtcAudioStatsXM, AgoraRtcRemoteVideoStatsXM;

@interface AgoraRtcRemoteMediaStatsXM : NSObject
{
    AgoraRtcAudioStatsXM *_audio;
    AgoraRtcRemoteVideoStatsXM *_video;
}

@property(retain, nonatomic) AgoraRtcRemoteVideoStatsXM *video; // @synthesize video=_video;
@property(retain, nonatomic) AgoraRtcAudioStatsXM *audio; // @synthesize audio=_audio;
- (void).cxx_destruct;

@end
