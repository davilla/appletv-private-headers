/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {
	NSSet *_propertiesToFind;	// 4 = 0x4
	NSString *_expandedName;	// 8 = 0x8
	NSString *_expandedNameSpace;	// 12 = 0xc
}
@property(retain) NSString *expandedName;	// G=0x3319f6c1; S=0x3319f749; @synthesize=_expandedName
@property(retain) NSString *expandedNameSpace;	// G=0x3319f6d9; S=0x3319f775; @synthesize=_expandedNameSpace
@property(retain) NSSet *propertiesToFind;	// G=0x3319f6a9; S=0x3319f71d; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x3319f5bd
- (void)dealloc;	// 0x3319f625
// declared property getter: - (id)expandedName;	// 0x3319f6c1
// declared property getter: - (id)expandedNameSpace;	// 0x3319f6d9
// declared property getter: - (id)propertiesToFind;	// 0x3319f6a9
// declared property setter: - (void)setExpandedName:(id)name;	// 0x3319f749
// declared property setter: - (void)setExpandedNameSpace:(id)space;	// 0x3319f775
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x3319f71d
@end

