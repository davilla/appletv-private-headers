/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NccpTransactionResult : NSObject {
@private
	NSString *method;	// 4 = 0x4
	int nccpErr;	// 8 = 0x8
	int httpErr;	// 12 = 0xc
	NSString *nwErr;	// 16 = 0x10
	NSString *errorMsg;	// 20 = 0x14
}
@property(readonly, retain) NSString *errorMsg;	// G=0x3083740c; @synthesize
@property(readonly, assign) int httpErr;	// G=0x30835c70; @synthesize
@property(readonly, retain) NSString *method;	// G=0x308373cc; @synthesize
@property(readonly, assign) int nccpErr;	// G=0x30835c84; @synthesize
@property(readonly, retain) NSString *nwErr;	// G=0x308373ec; @synthesize
- (id)init;	// 0x30836028
- (void)dealloc;	// 0x30837318
// declared property getter: - (id)errorMsg;	// 0x3083740c
// declared property getter: - (int)httpErr;	// 0x30835c70
// declared property getter: - (id)method;	// 0x308373cc
// declared property getter: - (int)nccpErr;	// 0x30835c84
// declared property getter: - (id)nwErr;	// 0x308373ec
- (void)reset;	// 0x30837260
- (void)setNccpTransactionResult:(id)result withNccpErr:(int)nccpErr withHttpErr:(int)httpErr withNWErr:(id)nwerr withErrorMsg:(id)errorMsg;	// 0x3083712c
- (void)setNccpTransactionResultWithErrorMsg:(id)errorMsg;	// 0x308370c0
@end

