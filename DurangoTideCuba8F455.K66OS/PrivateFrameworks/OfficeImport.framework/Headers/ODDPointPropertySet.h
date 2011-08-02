/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x32c8f2b9; S=0x32c8c285; converted property
@property(assign) double customOffsetY;	// G=0x32c8f2c9; S=0x32c8c271; converted property
@property(assign) double customScaleX;	// G=0x32c8f299; S=0x32c8c249; converted property
@property(assign) double customScaleY;	// G=0x32c8f2a9; S=0x32c8c25d; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x32ce1e55; S=0x32ce1e65; converted property
@property(retain) id layoutTypeId;	// G=0x32c8d441; S=0x32c8bfcd; converted property
@property(retain) id presentationAssociatedId;	// G=0x32c8ceb9; S=0x32c8c211; converted property
@property(retain) id presentationName;	// G=0x32c8faa1; S=0x32c8c005; converted property
@property(assign) int presentationStyleCount;	// G=0x32ce1e45; S=0x32c8c3a1; converted property
@property(assign) int presentationStyleIndex;	// G=0x32c8fb11; S=0x32c8c3b1; converted property
@property(retain) id presentationStyleLabel;	// G=0x32c8fab1; S=0x32c8c03d; converted property
// converted property getter: - (double)customOffsetX;	// 0x32c8f2b9
// converted property getter: - (double)customOffsetY;	// 0x32c8f2c9
// converted property getter: - (double)customScaleX;	// 0x32c8f299
// converted property getter: - (double)customScaleY;	// 0x32c8f2a9
// converted property getter: - (BOOL)customVerticalFlip;	// 0x32ce1e55
- (void)dealloc;	// 0x32c90bcd
// converted property getter: - (id)layoutTypeId;	// 0x32c8d441
// converted property getter: - (id)presentationAssociatedId;	// 0x32c8ceb9
// converted property getter: - (id)presentationName;	// 0x32c8faa1
// converted property getter: - (int)presentationStyleCount;	// 0x32ce1e45
// converted property getter: - (int)presentationStyleIndex;	// 0x32c8fb11
// converted property getter: - (id)presentationStyleLabel;	// 0x32c8fab1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x32c8c285
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x32c8c271
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x32c8c249
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x32c8c25d
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x32ce1e65
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x32c8bfcd
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x32c8c211
// converted property setter: - (void)setPresentationName:(id)name;	// 0x32c8c005
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x32c8c3a1
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x32c8c3b1
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x32c8c03d
@end

