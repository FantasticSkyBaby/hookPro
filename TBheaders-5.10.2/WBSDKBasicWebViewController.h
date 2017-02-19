//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WBSDKWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIColor, WBBaseRequest, WBSDKWebView;

@interface WBSDKBasicWebViewController : UIViewController <WBSDKWebViewDelegate>
{
    _Bool _needResponse;	// 8 = 0x8
    NSString *_navigationBarTitle;	// 16 = 0x10
    UIColor *_navigationBarTitleColor;	// 24 = 0x18
    UIColor *_navigationBarButtonColor;	// 32 = 0x20
    UIColor *_navigationBarTintColor;	// 40 = 0x28
    WBBaseRequest *_weibosdkRequest;	// 48 = 0x30
    WBSDKWebView *_webView;	// 56 = 0x38
    NSURL *_loadUrl;	// 64 = 0x40
}

@property(nonatomic) _Bool needResponse; // @synthesize needResponse=_needResponse;
@property(retain, nonatomic) NSURL *loadUrl; // @synthesize loadUrl=_loadUrl;
@property(retain, nonatomic) WBSDKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WBBaseRequest *weibosdkRequest; // @synthesize weibosdkRequest=_weibosdkRequest;
- (void).cxx_destruct;
- (void)wbsdk_webView:(id)arg1 didPressErrorViewReloadButton:(id)arg2;
- (void)wbsdk_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)wbsdk_webViewDidFinishLoad:(id)arg1;
- (void)wbsdk_webViewDidStartLoad:(id)arg1;
- (_Bool)wbsdk_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)closeBtnClicked;
@property(retain, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) UIColor *navigationBarButtonColor; // @synthesize navigationBarButtonColor=_navigationBarButtonColor;
@property(retain, nonatomic) UIColor *navigationBarTitleColor; // @synthesize navigationBarTitleColor=_navigationBarTitleColor;
@property(retain, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
- (void)reload;
- (void)startWebViewRequest;
- (void)loadWebViewUrl;
- (id)urlRequestFromWeiboSDKRequest:(id)arg1 andExtraPara:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andTitle:(id)arg2;
- (id)initWithWeiboSDKRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
