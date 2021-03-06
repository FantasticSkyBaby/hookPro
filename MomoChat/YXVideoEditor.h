//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, AVMutableAudioMix, AVMutableComposition, AVMutableCompositionTrack, AVMutableVideoComposition, NSMutableArray, NSString, SDAVAssetExportSession;

@interface YXVideoEditor : NSObject
{
    _Bool smartLoaded;
    _Bool useSavedCompositionAudioTracks;
    AVMutableCompositionTrack *savedCompositionAudioTracks[2];
    _Bool _muteOriginalSound;
    _Bool _reversePlay;
    _Bool _donotFadeOut;
    int _framePerSecond;
    long long _videoRateBit;
    NSMutableArray *_clips;
    NSMutableArray *_timeJumpArray;
    NSMutableArray *_audioMixArray;
    long long _soundEffectIndex;
    double _playRate;
    double _clipVolume;
    NSMutableArray *_specailClipArray;
    AVMutableComposition *_composition;
    AVMutableVideoComposition *_videoComposition;
    AVMutableAudioMix *_audioMix;
    NSMutableArray *_commentaryTrackMixArray;
    NSString *_xunfeiID;
    NSString *_xunfeiText;
    NSString *_xunfeiSoundPath;
    double _mixIntensity;
    AVMutableComposition *_orginalComposition;
    AVMutableComposition *_bgmComposition;
    AVMutableComposition *_smartComposition;
    NSMutableArray *_videoSegments;
    NSMutableArray *_audioSegments;
    SDAVAssetExportSession *_sdAVExport;
    AVAssetExportSession *_originAVExport;
    struct CGSize _videoSize;
}

@property(retain, nonatomic) AVAssetExportSession *originAVExport; // @synthesize originAVExport=_originAVExport;
@property(retain, nonatomic) SDAVAssetExportSession *sdAVExport; // @synthesize sdAVExport=_sdAVExport;
@property(retain, nonatomic) NSMutableArray *audioSegments; // @synthesize audioSegments=_audioSegments;
@property(retain, nonatomic) NSMutableArray *videoSegments; // @synthesize videoSegments=_videoSegments;
@property(retain, nonatomic) AVMutableComposition *smartComposition; // @synthesize smartComposition=_smartComposition;
@property(readonly, nonatomic) AVMutableComposition *bgmComposition; // @synthesize bgmComposition=_bgmComposition;
@property(readonly, nonatomic) AVMutableComposition *orginalComposition; // @synthesize orginalComposition=_orginalComposition;
@property(nonatomic) double mixIntensity; // @synthesize mixIntensity=_mixIntensity;
@property(retain, nonatomic) NSString *xunfeiSoundPath; // @synthesize xunfeiSoundPath=_xunfeiSoundPath;
@property(retain, nonatomic) NSString *xunfeiText; // @synthesize xunfeiText=_xunfeiText;
@property(retain, nonatomic) NSString *xunfeiID; // @synthesize xunfeiID=_xunfeiID;
@property(retain, nonatomic) NSMutableArray *commentaryTrackMixArray; // @synthesize commentaryTrackMixArray=_commentaryTrackMixArray;
@property(retain, nonatomic) AVMutableAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) NSMutableArray *specailClipArray; // @synthesize specailClipArray=_specailClipArray;
@property(nonatomic) double clipVolume; // @synthesize clipVolume=_clipVolume;
@property(nonatomic) _Bool donotFadeOut; // @synthesize donotFadeOut=_donotFadeOut;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) long long soundEffectIndex; // @synthesize soundEffectIndex=_soundEffectIndex;
@property(nonatomic) _Bool reversePlay; // @synthesize reversePlay=_reversePlay;
@property(retain, nonatomic) NSMutableArray *audioMixArray; // @synthesize audioMixArray=_audioMixArray;
@property(retain, nonatomic) NSMutableArray *timeJumpArray; // @synthesize timeJumpArray=_timeJumpArray;
@property(nonatomic) _Bool muteOriginalSound; // @synthesize muteOriginalSound=_muteOriginalSound;
@property(retain, nonatomic) NSMutableArray *clips; // @synthesize clips=_clips;
@property(nonatomic) int framePerSecond; // @synthesize framePerSecond=_framePerSecond;
@property(nonatomic) long long videoRateBit; // @synthesize videoRateBit=_videoRateBit;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;
- (void)arrangeAnimatedLayer:(id)arg1;
- (void)rebuild;
- (void)appendVideoComponents:(id)arg1;
- (void)replaceAt:(long long)arg1 withComponent:(id)arg2;
- (void)exchangeClipAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)removeClipAt:(long long)arg1;
- (void)duplicateClipAt:(long long)arg1;
- (void)setEditorPlayRate:(double)arg1;
- (void)setEditorSoundEffect:(long long)arg1;
- (void)setEditorReversePlay:(_Bool)arg1;
- (void)buildCommentaryTrackToComposition:(id)arg1 withAudioMix:(id)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (void)makeSoundFadeOutEffect;
- (void)arrangeAudioTrackFromFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)arrangeAudioTrackFromFile:(id)arg1 repeatable:(_Bool)arg2;
- (void)arrangeAudioTrackFromFile:(id)arg1;
- (void)addCommentaryTrackToComposition:(id)arg1 withAudioMix:(id)arg2;
- (void)clearArrangedSoundClips;
- (void)clearArrangedClips;
- (void)appendSpecailClip:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)replaceTimeJumpConfigAt:(long long)arg1 withFile:(id)arg2;
- (void)arrangeClipWithIndex:(long long)arg1 timeRange:(CDStruct_e83c9415)arg2 muteAudio:(_Bool)arg3;
- (id)getAllClips;
- (CDStruct_e83c9415)getTimeRangeForClips;
- (void)setTimeRangeForClips:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)getTotalDurationForClips;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (_Bool)needTransition;
- (id)buildVideoCompositionForExportWithAnimatedLayer:(id)arg1;
- (void)cancelExport;
- (void)exportWithBitRate:(id)arg1 andAnimatedLayer:(id)arg2 outputPath:(id)arg3 processingBlock:(CDUnknownBlockType)arg4 completeHanlder:(CDUnknownBlockType)arg5;
- (void)exportWithQuality:(id)arg1 andAnimatedLayer:(id)arg2 outputPath:(id)arg3 processingBlock:(CDUnknownBlockType)arg4 completeHanlder:(CDUnknownBlockType)arg5;
- (void)exportWithAnimatedLayer:(id)arg1 outputPath:(id)arg2 processingBlock:(CDUnknownBlockType)arg3 completeHanlder:(CDUnknownBlockType)arg4;
- (id)buildNormalPlayerItem;
- (id)buildSynchronizedLayer:(id)arg1 animatedLayer:(id)arg2;
- (void)getPlayerItem:(id *)arg1 andSynchronizedLayer:(id *)arg2 withAnimatedLayer:(id)arg3;
- (void)buildVideoComposition:(id)arg1 forComposition:(id)arg2;
- (void)buildSmartComposition:(id)arg1 andVideoComposition:(id)arg2 full:(_Bool)arg3;
- (void)buildStraightComposition:(id)arg1 andVideoComposition:(id)arg2;
- (struct CGAffineTransform)transformation:(id)arg1;
- (void)buildTransitionComposition:(id)arg1 andVideoComposition:(id)arg2;
- (void)buildMultipleFrameCompositionForConfig:(id)arg1;
- (void)buildSmartCompositionForClips;
- (void)buildSimpleCompositionForClips;
- (void)buildCompositionForClips;
- (void)useOriginalVideoSize;
- (void)willResignActive;
- (void)dealloc;
- (id)init;

@end

