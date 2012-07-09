/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary;

@interface OSDVars : NSObject {
	NSMutableDictionary *_map;	// 4 = 0x4
	NSMutableDictionary *_aliases;	// 8 = 0x8
	NSMutableDictionary *_aliasesToResolve;	// 12 = 0xc
	BOOL _engMode;	// 16 = 0x10
	BOOL _color;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x32a17571; @dynamic
@property(assign, nonatomic) BOOL colorFailures;	// G=0x32a1817d; S=0x32a1818d; @synthesize=_color
@property(assign, nonatomic) BOOL engineeringMode;	// G=0x32a1815d; S=0x32a1816d; @synthesize=_engMode
+ (id)sharedVars;	// 0x32a17535
- (id)init;	// 0x32a17599
- (unsigned)__iterateList:(void **)list withOMPair:(objMapPair)ompair andBlock:(id)block;	// 0x32a16d15
- (BOOL)_addAlias:(id)alias forProperty:(objc_property *)property andObject:(id)object;	// 0x32a170e9
- (unsigned)_addExports:(id)exports toOMPair:(objMapPair)ompair;	// 0x32a16efd
- (void)_addMappedInstance:(id)instance;	// 0x32a16745
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair;	// 0x32a16cf1
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair withName:(id)name;	// 0x32a16b95
- (unsigned)_addMethods:(objc_method **)methods toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x32a16e31
- (unsigned)_addProperties:(objc_property **)properties toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x32a16d85
- (BOOL)_addProperty:(objc_property *)property toOMPair:(objMapPair)ompair;	// 0x32a16911
- (id)_checkIsQualifiedAndGetComponents:(id)components;	// 0x32a16269
- (id)_classMapForClassNamed:(id)classNamed create:(BOOL)create;	// 0x32a16579
- (id)_classMapForObject:(id)object create:(BOOL)create;	// 0x32a166c9
- (id)_execute:(id)execute;	// 0x32a163cd
- (id)_handlerForType:(const char *)type;	// 0x32a1620d
- (void)_interFailure:(id)failure method:(id)method desc:(id)desc;	// 0x32a17179
- (id)_invocationForAlias:(id)alias;	// 0x32a16841
- (id)_invocationForName:(id)name isFullyQualified:(BOOL *)qualified;	// 0x32a168d1
- (id)_invocationForQualifiedName:(id)qualifiedName;	// 0x32a16869
- (id)_mappedInstanceForType:(Class)type;	// 0x32a167e9
- (id)_mappedProperty:(id)property forClassNamed:(id)classNamed;	// 0x32a1638d
- (id)_methodMapForClassNamed:(id)classNamed;	// 0x32a1668d
- (id)_methodMapForObject:(id)object;	// 0x32a16709
- (BOOL)_objectIsMapped:(id)mapped;	// 0x32a16325
- (BOOL)_typeIsMapped:(id)mapped;	// 0x32a162e1
- (BOOL)_typeIsValid:(const char *)valid;	// 0x32a161cd
- (BOOL)addAlias:(id)alias forPropertyNamed:(id)propertyNamed andClassNamed:(id)named;	// 0x32a17d29
- (unsigned)addMappedInstance:(id)instance;	// 0x32a17b49
- (void)addMapping:(id)mapping;	// 0x32a17701
// declared property getter: - (id)aliases;	// 0x32a17571
// declared property getter: - (BOOL)colorFailures;	// 0x32a1817d
- (void)dealloc;	// 0x32a17665
// declared property getter: - (BOOL)engineeringMode;	// 0x32a1815d
- (id)interpolate:(id)interpolate;	// 0x32a17e75
- (BOOL)removeMappedInstance:(id)instance;	// 0x32a178dd
// declared property setter: - (void)setColorFailures:(BOOL)failures;	// 0x32a1818d
// declared property setter: - (void)setEngineeringMode:(BOOL)mode;	// 0x32a1816d
@end
