//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface JDBeansModel : JDModel
{
    NSNumber *_Id;
    NSString *_title;
    NSNumber *_type;
    NSNumber *_checkType;
    NSNumber *_needJBeanNum;
    NSNumber *_discount;
    NSNumber *_promoPrice;
}

@property(retain, nonatomic) NSNumber *promoPrice; // @synthesize promoPrice=_promoPrice;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSNumber *needJBeanNum; // @synthesize needJBeanNum=_needJBeanNum;
@property(retain, nonatomic) NSNumber *checkType; // @synthesize checkType=_checkType;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
