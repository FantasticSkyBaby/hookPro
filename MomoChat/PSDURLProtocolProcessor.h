//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSDWebViewURLProtocolDelegate.h"

@class NSDate, NSMutableData, NSString, NSURLRequest, NSURLResponse, PSDConnectionMonitor;

@interface PSDURLProtocolProcessor : NSObject <PSDWebViewURLProtocolDelegate>
{
    _Bool _shouldProcessReceiveData;
    NSMutableData *_receiveData;
    NSURLRequest *_currentRequest;
    NSURLResponse *_currentResponse;
    PSDConnectionMonitor *_monitor;
    NSString *_contentType;
    NSString *_textEncodingName;
    NSString *_uniqueId;
    NSDate *_requestDate;
    NSDate *_responseDate;
}

@property(retain, nonatomic) NSDate *responseDate; // @synthesize responseDate=_responseDate;
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) PSDConnectionMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool shouldProcessReceiveData; // @synthesize shouldProcessReceiveData=_shouldProcessReceiveData;
@property(retain, nonatomic) NSURLResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
- (void).cxx_destruct;
- (void)PSDWebViewURLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)PSDWebViewURLProtocolDidFinishLoading:(id)arg1;
- (void)PSDWebViewURLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)PSDWebViewURLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)PSDWebViewURLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)PSDWebViewURLProtocol:(id)arg1 startLoading:(id)arg2;
- (void)PSDWebViewURLProtocol:(id)arg1 willStartLoading:(id)arg2;
- (void)dispatchFinishEvent:(id)arg1 error:(id)arg2;
- (void)dispatchStartEvent;
- (void)dispatchWillStartEvent;
- (void)appendData:(id)arg1;
- (unsigned long long)getUniqueId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
