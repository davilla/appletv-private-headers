/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSDictionary, SSXPCConnection, NSMutableDictionary;

@interface SSEntity : NSObject <SSXPCCoding> {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x315753ad; S=0x315757dd; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x31575549; S=0x315758bd; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x315756e5; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x315757c1; 
@property(readonly, assign) BOOL exists;	// G=0x31574191; 
+ (long long)_existsMessage;	// 0x31575089
+ (long long)_getExternalValuesMessage;	// 0x31575091
+ (long long)_getValueMessage;	// 0x31575099
+ (long long)_setExternalValuesMessage;	// 0x315750a1
+ (long long)_setValuesMessage;	// 0x315750a9
- (id)init;	// 0x3157404d
- (void)_addCachedExternalValues:(id)values;	// 0x315750b1
- (void)_addCachedPropertyValues:(id)values;	// 0x315751b1
- (void)_becomeManagedOnConnection:(id)connection;	// 0x315752b1
- (id)_clientValueForProperty:(id)property databaseValue:(id)value;	// 0x315753a9
- (void)_getValues:(id *)values forProperties:(id *)properties count:(unsigned)count message:(long long)message;	// 0x3157599d
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x3157409d
// declared property getter: - (BOOL)_isManaged;	// 0x315756e5
// declared property getter: - (id)_localExternalValues;	// 0x315753ad
// declared property getter: - (id)_localValues;	// 0x31575549
// declared property getter: - (long long)_persistentIdentifier;	// 0x315757c1
- (void)_resetLocalIVars;	// 0x315757d9
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x315757dd
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x315758bd
- (void *)copyXPCEncoding;	// 0x31575ead
- (void)dealloc;	// 0x31574105
- (id)description;	// 0x31574fa5
// declared property getter: - (BOOL)exists;	// 0x31574191
- (void)getValues:(id *)values forExternalProperties:(id *)externalProperties count:(unsigned)count;	// 0x315749b1
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x315744c5
- (unsigned)hash;	// 0x31575015
- (BOOL)isEqual:(id)equal;	// 0x31575025
- (void)resetCachedExternalProperties:(id *)properties count:(unsigned)count;	// 0x31574a09
- (void)resetCachedProperties:(id *)properties count:(unsigned)count;	// 0x31574add
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x31574bb1
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x3157451d
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x315745bd
- (id)valueForExternalProperty:(id)externalProperty;	// 0x31574f79
- (id)valueForProperty:(id)property;	// 0x31574985
@end
