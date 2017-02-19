//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKAudioConvert : NSObject
{
    struct SwrContext *_swr_ctx;
    char *_out_buf;
    int _out_buf_size;
    int _sampleRate;
    int _channels;
}

@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)convert:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;

@end
