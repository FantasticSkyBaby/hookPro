//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSCrashInstallation.h"

@class NSArray, NSDictionary, NSString;

@interface KSCrashInstallationEmail : KSCrashInstallation
{
    int _reportStyle;
    NSArray *_recipients;
    NSString *_subject;
    NSString *_message;
    NSString *_filenameFmt;
    NSDictionary *_defaultFilenameFormats;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *defaultFilenameFormats; // @synthesize defaultFilenameFormats=_defaultFilenameFormats;
@property(nonatomic) int reportStyle; // @synthesize reportStyle=_reportStyle;
@property(retain, nonatomic) NSString *filenameFmt; // @synthesize filenameFmt=_filenameFmt;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void).cxx_destruct;
- (id)sink;
- (void)setReportStyle:(int)arg1 useDefaultFilenameFormat:(_Bool)arg2;
- (id)init;

@end
