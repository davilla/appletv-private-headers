/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationPattern : NSObject {
	id _propertyListRepresentation;	// 4 = 0x4
	id _complexPatternDescription;	// 8 = 0x8
	double _duration;	// 12 = 0xc
	id _contextObject;	// 20 = 0x14
@private
	id contextObject;	// 24 = 0x18
}
@property(readonly, assign) id _artificiallyRepeatingPropertyListRepresentation;	// G=0x31f17791; 
@property(assign, setter=_setDuration:) double _duration;	// G=0x31f17c6d; S=0x31f17ca1; @synthesize
@property(readonly, assign) double computedDuration;	// G=0x31f178e9; 
@property(retain, nonatomic) id contextObject;	// G=0x31f17cd5; S=0x31f17ce5; @synthesize
@property(readonly, assign, nonatomic) id propertyListRepresentation;	// G=0x31f176d5; 
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)vibrationsAndPauses;	// 0x31f172bd
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;	// 0x31f16dcd
+ (id)simpleVibrationPatternWithVibrationDuration:(double)vibrationDuration pauseDuration:(double)duration;	// 0x31f17151
- (id)init;	// 0x31f174fd
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation;	// 0x31f175b1
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation skipValidation:(BOOL)validation;	// 0x31f175c5
// declared property getter: - (id)_artificiallyRepeatingPropertyListRepresentation;	// 0x31f17791
// declared property getter: - (double)_duration;	// 0x31f17c6d
// declared property setter: - (void)_setDuration:(double)duration;	// 0x31f17ca1
- (void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;	// 0x31f17a59
// declared property getter: - (double)computedDuration;	// 0x31f178e9
// declared property getter: - (id)contextObject;	// 0x31f17cd5
- (void)dealloc;	// 0x31f17661
// declared property getter: - (id)propertyListRepresentation;	// 0x31f176d5
// declared property setter: - (void)setContextObject:(id)object;	// 0x31f17ce5
@end
