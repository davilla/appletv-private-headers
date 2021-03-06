/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProxyGetter.h"

@class NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {
@private
	NSKeyValueGetter *_baseGetter;	// 40 = 0x28
	NSKeyValueSetter *_baseSetter;	// 44 = 0x2c
}
@property(readonly, retain) NSKeyValueGetter *baseGetter;	// G=0x35e4de81; converted property
@property(readonly, retain) NSKeyValueSetter *baseSetter;	// G=0x35e4de91; converted property
- (id)initWithContainerClassID:(id)containerClassID key:(id)key baseGetter:(id)getter baseSetter:(id)setter containerIsa:(Class)isa proxyClass:(Class)aClass;	// 0x35e09e8d
// converted property getter: - (id)baseGetter;	// 0x35e4de81
// converted property getter: - (id)baseSetter;	// 0x35e4de91
- (void)dealloc;	// 0x35e4de21
- (BOOL)treatNilValuesLikeEmptyCollections;	// 0x35e4dea1
@end

