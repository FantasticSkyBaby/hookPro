//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface JDPriceLabel : UILabel
{
}

+ (_Bool)showCurrencySymbol;
- (id)updateTextWithPrice:(id)arg1 precision:(long long)arg2;
- (id)textWithPrice:(id)arg1 precision:(long long)arg2;
- (id)textWithPrice:(id)arg1 precision:(long long)arg2 leftFont:(long long)arg3 rightFont:(long long)arg4 deleteIcon:(_Bool)arg5;
- (_Bool)validatePriceString:(id)arg1;
- (_Bool)updateValidatePriceString:(id)arg1 isZeroValidated:(_Bool)arg2;
- (_Bool)validatePriceString:(id)arg1 isZeroValidated:(_Bool)arg2;
- (void)setPrice:(id)arg1 withPrecision:(long long)arg2 leftFont:(long long)arg3 rightFont:(long long)arg4 deleteIcon:(_Bool)arg5;
- (void)setPrice:(id)arg1 withPrecision:(long long)arg2;
- (void)updatePrice:(id)arg1 withPrecision:(long long)arg2 isZeroValidated:(_Bool)arg3;
- (void)setPrice:(id)arg1 withPrecision:(long long)arg2 leftFont:(long long)arg3 rightFont:(long long)arg4 isZeroValidated:(_Bool)arg5 deleteIcon:(_Bool)arg6;
- (void)setPrice:(id)arg1 withPrecision:(long long)arg2 isZeroValidated:(_Bool)arg3;
- (void)setPrice:(id)arg1 bValidated:(_Bool)arg2;
- (void)setPrice:(id)arg1;
- (void)setPriceLableWihtPrice:(id)arg1 pointNumber:(int)arg2 color:(id)arg3 font:(id)arg4;
- (void)setPriceLableWihtPrice:(id)arg1 pointNumber:(int)arg2 textColor:(id)arg3 font:(id)arg4;

@end
