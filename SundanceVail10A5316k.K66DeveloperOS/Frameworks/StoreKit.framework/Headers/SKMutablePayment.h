/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKPayment.h"

@class NSData, NSDictionary, NSString;

@interface SKMutablePayment : SKPayment {
}
@property(copy, nonatomic) NSString *productIdentifier;	// S=0x349fe739; @dynamic
@property(assign, nonatomic) int quantity;	// S=0x349fe789; @dynamic
@property(copy, nonatomic) NSData *requestData;	// S=0x349fe7a9; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x349fe84d; @dynamic
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x349fe739
// declared property setter: - (void)setQuantity:(int)quantity;	// 0x349fe789
// declared property setter: - (void)setRequestData:(id)data;	// 0x349fe7a9
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x349fe84d
@end
