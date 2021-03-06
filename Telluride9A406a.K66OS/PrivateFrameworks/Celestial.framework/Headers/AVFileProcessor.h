/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
@private
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x338c9271
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x338c9201
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x338c9229
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x338c924d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x338c9449
- (id)rentalInfo:(id)info;	// 0x338c9305
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x338c92b5
- (id)sinfsFromFilePath:(id)filePath;	// 0x338c92dd
@end

