/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject {
@private
	NSMutableDictionary *properties;	// 4 = 0x4
	NSMutableString *mStyleString;	// 8 = 0x8
}
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x351c6501; converted property
- (id)init;	// 0x35127971
- (id)initWithStyle:(id)style;	// 0x3541b535
- (void)addProperty:(id)property forKey:(id)key;	// 0x3512b729
- (void)appendDefaultBorderStyle;	// 0x352e8c35
- (void)appendPositionInfoFromRect:(CGRect)rect;	// 0x35129439
- (void)appendPropertyForName:(id)name color:(id)color;	// 0x352f4fd1
- (void)appendPropertyForName:(id)name floatValue:(float)value;	// 0x352fb1e1
- (void)appendPropertyForName:(id)name intValue:(int)value;	// 0x351b1a9d
- (void)appendPropertyForName:(id)name length:(double)length unit:(int)unit;	// 0x35129f5d
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing;	// 0x3512aefd
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing lineHeight:(float)height unit:(int)unit;	// 0x3512b12d
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing unit:(int)unit;	// 0x3512af21
- (void)appendPropertyForName:(id)name stringValue:(id)value;	// 0x3512ddf1
- (void)appendPropertyForName:(id)name stringWithColons:(id)colons;	// 0x351293b9
- (void)appendPropertyString:(id)string;	// 0x352f53a5
- (void)appendSizeInfoFromRect:(CGRect)rect;	// 0x351b0f85
- (id)attributeForName:(id)name;	// 0x351ba239
- (id)cssStyleString;	// 0x35127561
- (void)dealloc;	// 0x35127825
// converted property getter: - (id)properties;	// 0x351c6501
- (id)propertyForName:(id)name;	// 0x351c6399
@end

