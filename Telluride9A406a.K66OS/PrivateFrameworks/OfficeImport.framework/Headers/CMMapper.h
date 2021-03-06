/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRootArchiver.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMMapper : NSObject <CMMapperRootArchiver> {
@private
	CMMapper *mParent;	// 4 = 0x4
}
@property(retain) id parent;	// G=0x328214cd; S=0x32b12399; converted property
- (id)initWithParent:(id)parent;	// 0x3281e901
- (void)addAttribute:(id)attribute toNode:(id)node value:(id)value;	// 0x3281e2d1
- (void)addStyle:(id)style withName:(id)name;	// 0x32b123b9
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style;	// 0x328213bd
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style embedStyle:(BOOL)style3;	// 0x3281e509
- (id)archiver;	// 0x3282143d
- (void)finishMappingWithState:(id)state;	// 0x32b123b5
- (void)mapAt:(id)at withState:(id)state;	// 0x32b123a9
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x32b123b1
- (void)mapStylesheetAt:(id)at stylesheet:(id)stylesheet;	// 0x3291cac5
// converted property getter: - (id)parent;	// 0x328214cd
- (id)root;	// 0x32821495
// converted property setter: - (void)setParent:(id)parent;	// 0x32b12399
- (void)startMappingWithState:(id)state;	// 0x32b123ad
@end

