/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x35a86a35; S=0x35a86a11; @synthesize=_nameAttribute
- (id)init;	// 0x35a86989
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35a869c5
- (void)dealloc;	// 0x35a86be5
// declared property getter: - (id)nameAttribute;	// 0x35a86a35
- (void)parserFoundAttributes:(id)attributes;	// 0x35a86afd
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x35a86a11
- (void)write:(id)write;	// 0x35a86a4d
@end

