/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x3319837d; S=0x331983c5; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x33198395; S=0x331983f1; @synthesize=_nameSpace
@property(retain) NSString *value;	// G=0x331983ad; S=0x3319841d; @synthesize=_value
- (id)init;	// 0x33198185
- (id)initWithNameSpace:(id)nameSpace name:(id)name value:(id)value;	// 0x331982c5
- (void)dealloc;	// 0x33198265
- (id)description;	// 0x331981c5
// declared property getter: - (id)name;	// 0x3319837d
// declared property getter: - (id)nameSpace;	// 0x33198395
// declared property setter: - (void)setName:(id)name;	// 0x331983c5
// declared property setter: - (void)setNameSpace:(id)space;	// 0x331983f1
// declared property setter: - (void)setValue:(id)value;	// 0x3319841d
// declared property getter: - (id)value;	// 0x331983ad
@end

