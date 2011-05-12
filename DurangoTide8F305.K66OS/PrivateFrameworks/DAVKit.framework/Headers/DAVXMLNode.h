/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableArray;

@interface DAVXMLNode : NSObject {
	NSMutableArray *_children;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSString *_content;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *attributes;	// G=0x3008d461; converted property
@property(readonly, retain) NSMutableArray *children;	// G=0x3008d471; converted property
@property(retain) NSString *content;	// G=0x3008dbb9; S=0x3008dcd5; converted property
@property(readonly, retain) NSString *name;	// G=0x3008d451; converted property
+ (id)collectionNode;	// 0x3008de11
+ (id)nodeWithName:(id)name attributes:(id)attributes;	// 0x3008dd89
+ (id)textNodeWithContent:(id)content;	// 0x3008ddcd
- (id)initWithName:(id)name attributes:(id)attributes;	// 0x3008def5
- (void)addChild:(id)child;	// 0x3008dd21
// converted property getter: - (id)attributes;	// 0x3008d461
- (id)childNamed:(id)named;	// 0x3008e265
// converted property getter: - (id)children;	// 0x3008d471
- (unsigned)childrenCount;	// 0x3008da91
- (id)childrenEnumerator;	// 0x3008dab1
- (id)childrenNamed:(id)named;	// 0x3008e175
// converted property getter: - (id)content;	// 0x3008dbb9
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x3008d57d
- (void)dealloc;	// 0x3008de75
- (id)description;	// 0x3008da79
- (id)hrefChildren;	// 0x3008df7d
- (BOOL)isNamed:(id)named;	// 0x3008dcad
// converted property getter: - (id)name;	// 0x3008d451
- (id)nonTextChildren;	// 0x3008e079
- (void)removeChild:(id)child;	// 0x3008dcfd
// converted property setter: - (void)setContent:(id)content;	// 0x3008dcd5
- (id)simpleTraverseWithPath:(id)path;	// 0x3008d545
- (id)simpleTraverseWithPathArray:(id)pathArray pos:(unsigned)pos;	// 0x3008d481
- (id)textContent;	// 0x3008dad1
- (id)xmlStringWithBag:(id)bag;	// 0x3008d5f5
@end

