/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableCellBorderStyle, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : NSObject {
@private
	OADTableCellBorderStyle *mBorderStyle;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
}
@property(retain) id borderStyle;	// G=0x32c99735; S=0x32c764b1; converted property
@property(retain) id fill;	// G=0x32c99b61; S=0x32c765fd; converted property
+ (id)defaultFill;	// 0x32cda609
+ (id)defaultStyle;	// 0x32cda565
- (void)applyOverridesFrom:(id)from;	// 0x32cda459
// converted property getter: - (id)borderStyle;	// 0x32c99735
- (void)dealloc;	// 0x32c77d2d
// converted property getter: - (id)fill;	// 0x32c99b61
// converted property setter: - (void)setBorderStyle:(id)style;	// 0x32c764b1
// converted property setter: - (void)setFill:(id)fill;	// 0x32c765fd
- (id)shallowCopy;	// 0x32cda4cd
@end

