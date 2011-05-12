/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMRating, NSMutableArray, GMMGeometry, GMMKmlInfo, NSString, GMMStructuredAddress, GMMAdInfo;

@interface GMMSearchResult : PBCodable {
@private
	int _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	GMMGeometry *_geometry;	// 12 = 0xc
	NSMutableArray *_addressLines;	// 16 = 0x10
	NSString *_phone;	// 20 = 0x14
	NSMutableArray *_enhancedContents;	// 24 = 0x18
	NSMutableArray *_references;	// 28 = 0x1c
	BOOL _showIcon;	// 32 = 0x20
	BOOL _hasShowIcon;	// 33 = 0x21
	NSString *_attributionText;	// 36 = 0x24
	NSString *_attributionUrl;	// 40 = 0x28
	GMMKmlInfo *_kmlInfo;	// 44 = 0x2c
	NSMutableArray *_images;	// 48 = 0x30
	GMMStructuredAddress *_structuredAddress;	// 52 = 0x34
	NSString *_mapsUrl;	// 56 = 0x38
	GMMAdInfo *_adInfo;	// 60 = 0x3c
	NSString *_queryRefinementString;	// 64 = 0x40
	GMMRating *_rating;	// 68 = 0x44
	unsigned long long _cid;	// 72 = 0x48
	BOOL _hasCid;	// 80 = 0x50
	int _locationSource;	// 84 = 0x54
	BOOL _hasLocationSource;	// 88 = 0x58
	BOOL _inexactPosition;	// 89 = 0x59
	BOOL _hasInexactPosition;	// 90 = 0x5a
	NSString *_streetViewPanoId;	// 92 = 0x5c
	BOOL _unverifiedListing;	// 96 = 0x60
	BOOL _hasUnverifiedListing;	// 97 = 0x61
	BOOL _sesameEditable;	// 98 = 0x62
	BOOL _hasSesameEditable;	// 99 = 0x63
	BOOL _sesameDetailsEditable;	// 100 = 0x64
	BOOL _hasSesameDetailsEditable;	// 101 = 0x65
	NSString *_sesameFeatureId;	// 104 = 0x68
	NSString *_directionsPlacemarkToken;	// 108 = 0x6c
	BOOL _closedListing;	// 112 = 0x70
	BOOL _hasClosedListing;	// 113 = 0x71
}
@property(retain, nonatomic) GMMAdInfo *adInfo;	// G=0x32b95209; S=0x32b97565; @synthesize=_adInfo
@property(retain, nonatomic) NSMutableArray *addressLines;	// G=0x32b952c9; S=0x32b973d5; @synthesize=_addressLines
@property(readonly, assign, nonatomic) int addressLinesCount;	// G=0x32b97149; 
@property(retain, nonatomic) NSString *attributionText;	// G=0x32b95269; S=0x32b97475; @synthesize=_attributionText
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x32b95259; S=0x32b9749d; @synthesize=_attributionUrl
@property(assign, nonatomic) unsigned long long cid;	// G=0x32b951d9; S=0x32b94fd1; @synthesize=_cid
@property(assign, nonatomic) BOOL closedListing;	// G=0x32b950e9; S=0x32b950bd; @synthesize=_closedListing
@property(retain, nonatomic) NSString *directionsPlacemarkToken;	// G=0x32b950f9; S=0x32b9762d; @synthesize=_directionsPlacemarkToken
@property(retain, nonatomic) NSMutableArray *enhancedContents;	// G=0x32b952a9; S=0x32b97425; @synthesize=_enhancedContents
@property(readonly, assign, nonatomic) int enhancedContentsCount;	// G=0x32b97029; 
@property(retain, nonatomic) GMMGeometry *geometry;	// G=0x32b952d9; S=0x32b973ad; @synthesize=_geometry
@property(readonly, assign, nonatomic) BOOL hasAdInfo;	// G=0x32b94f95; 
@property(readonly, assign, nonatomic) BOOL hasAttributionText;	// G=0x32b94f31; 
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x32b94f45; 
@property(readonly, assign, nonatomic) BOOL hasCid;	// G=0x32b951c9; @synthesize=_hasCid
@property(readonly, assign, nonatomic) BOOL hasClosedListing;	// G=0x32b950d9; @synthesize=_hasClosedListing
@property(readonly, assign, nonatomic) BOOL hasDirectionsPlacemarkToken;	// G=0x32b950a9; 
@property(readonly, assign, nonatomic) BOOL hasGeometry;	// G=0x32b94eed; 
@property(readonly, assign, nonatomic) BOOL hasInexactPosition;	// G=0x32b95189; @synthesize=_hasInexactPosition
@property(readonly, assign, nonatomic) BOOL hasKmlInfo;	// G=0x32b94f59; 
@property(readonly, assign, nonatomic) BOOL hasLocationSource;	// G=0x32b951a9; @synthesize=_hasLocationSource
@property(readonly, assign, nonatomic) BOOL hasMapsUrl;	// G=0x32b94f81; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x32b94ed9; 
@property(readonly, assign, nonatomic) BOOL hasPhone;	// G=0x32b94f01; 
@property(readonly, assign, nonatomic) BOOL hasQueryRefinementString;	// G=0x32b94fa9; 
@property(readonly, assign, nonatomic) BOOL hasRating;	// G=0x32b94fbd; 
@property(readonly, assign, nonatomic) BOOL hasSesameDetailsEditable;	// G=0x32b95119; @synthesize=_hasSesameDetailsEditable
@property(readonly, assign, nonatomic) BOOL hasSesameEditable;	// G=0x32b95139; @synthesize=_hasSesameEditable
@property(readonly, assign, nonatomic) BOOL hasSesameFeatureId;	// G=0x32b95095; 
@property(readonly, assign, nonatomic) BOOL hasShowIcon;	// G=0x32b95279; @synthesize=_hasShowIcon
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x32b9502d; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x32b94f6d; 
@property(readonly, assign, nonatomic) BOOL hasUnverifiedListing;	// G=0x32b95159; @synthesize=_hasUnverifiedListing
@property(retain, nonatomic) NSMutableArray *images;	// G=0x32b95239; S=0x32b974ed; @synthesize=_images
@property(readonly, assign, nonatomic) int imagesCount;	// G=0x32b96de9; 
@property(assign, nonatomic) BOOL inexactPosition;	// G=0x32b95199; S=0x32b95011; @synthesize=_inexactPosition
@property(retain, nonatomic) GMMKmlInfo *kmlInfo;	// G=0x32b95249; S=0x32b974c5; @synthesize=_kmlInfo
@property(assign, nonatomic) int locationSource;	// G=0x32b951b9; S=0x32b94ff5; @synthesize=_locationSource
@property(retain, nonatomic) NSString *mapsUrl;	// G=0x32b95219; S=0x32b9753d; @synthesize=_mapsUrl
@property(retain, nonatomic) NSString *name;	// G=0x32b952e9; S=0x32b97385; @synthesize=_name
@property(retain, nonatomic) NSString *phone;	// G=0x32b952b9; S=0x32b973fd; @synthesize=_phone
@property(retain, nonatomic) NSString *queryRefinementString;	// G=0x32b951f9; S=0x32b9758d; @synthesize=_queryRefinementString
@property(retain, nonatomic) GMMRating *rating;	// G=0x32b951e9; S=0x32b975b5; @synthesize=_rating
@property(retain, nonatomic) NSMutableArray *references;	// G=0x32b95299; S=0x32b9744d; @synthesize=_references
@property(readonly, assign, nonatomic) int referencesCount;	// G=0x32b96f09; 
@property(assign, nonatomic) BOOL sesameDetailsEditable;	// G=0x32b95129; S=0x32b95079; @synthesize=_sesameDetailsEditable
@property(assign, nonatomic) BOOL sesameEditable;	// G=0x32b95149; S=0x32b9505d; @synthesize=_sesameEditable
@property(retain, nonatomic) NSString *sesameFeatureId;	// G=0x32b95109; S=0x32b97605; @synthesize=_sesameFeatureId
@property(assign, nonatomic) BOOL showIcon;	// G=0x32b95289; S=0x32b94f15; @synthesize=_showIcon
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x32b95179; S=0x32b975dd; @synthesize=_streetViewPanoId
@property(retain, nonatomic) GMMStructuredAddress *structuredAddress;	// G=0x32b95229; S=0x32b97515; @synthesize=_structuredAddress
@property(assign, nonatomic) int type;	// G=0x32b952f9; S=0x32b95309; @synthesize=_type
@property(assign, nonatomic) BOOL unverifiedListing;	// G=0x32b95169; S=0x32b95041; @synthesize=_unverifiedListing
- (id)init;	// 0x32b972e9
// declared property getter: - (id)adInfo;	// 0x32b95209
- (void)addAddressLine:(id)line;	// 0x32b9704d
- (void)addEnhancedContent:(id)content;	// 0x32b96f2d
- (void)addImage:(id)image;	// 0x32b96ced
- (void)addReference:(id)reference;	// 0x32b96e0d
- (id)addressLineAtIndex:(unsigned)index;	// 0x32b9707d
// declared property getter: - (id)addressLines;	// 0x32b952c9
// declared property getter: - (int)addressLinesCount;	// 0x32b97149
// declared property getter: - (id)attributionText;	// 0x32b95269
// declared property getter: - (id)attributionUrl;	// 0x32b95259
// declared property getter: - (unsigned long long)cid;	// 0x32b951d9
// declared property getter: - (BOOL)closedListing;	// 0x32b950e9
- (void)dealloc;	// 0x32b9716d
- (id)description;	// 0x32b957d5
- (id)dictionaryRepresentation;	// 0x32b95319
// declared property getter: - (id)directionsPlacemarkToken;	// 0x32b950f9
- (id)enhancedContentAtIndex:(unsigned)index;	// 0x32b96f5d
// declared property getter: - (id)enhancedContents;	// 0x32b952a9
// declared property getter: - (int)enhancedContentsCount;	// 0x32b97029
// declared property getter: - (id)geometry;	// 0x32b952d9
// declared property getter: - (BOOL)hasAdInfo;	// 0x32b94f95
// declared property getter: - (BOOL)hasAttributionText;	// 0x32b94f31
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x32b94f45
// declared property getter: - (BOOL)hasCid;	// 0x32b951c9
// declared property getter: - (BOOL)hasClosedListing;	// 0x32b950d9
// declared property getter: - (BOOL)hasDirectionsPlacemarkToken;	// 0x32b950a9
// declared property getter: - (BOOL)hasGeometry;	// 0x32b94eed
// declared property getter: - (BOOL)hasInexactPosition;	// 0x32b95189
// declared property getter: - (BOOL)hasKmlInfo;	// 0x32b94f59
// declared property getter: - (BOOL)hasLocationSource;	// 0x32b951a9
// declared property getter: - (BOOL)hasMapsUrl;	// 0x32b94f81
// declared property getter: - (BOOL)hasName;	// 0x32b94ed9
// declared property getter: - (BOOL)hasPhone;	// 0x32b94f01
// declared property getter: - (BOOL)hasQueryRefinementString;	// 0x32b94fa9
// declared property getter: - (BOOL)hasRating;	// 0x32b94fbd
// declared property getter: - (BOOL)hasSesameDetailsEditable;	// 0x32b95119
// declared property getter: - (BOOL)hasSesameEditable;	// 0x32b95139
// declared property getter: - (BOOL)hasSesameFeatureId;	// 0x32b95095
// declared property getter: - (BOOL)hasShowIcon;	// 0x32b95279
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x32b9502d
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x32b94f6d
// declared property getter: - (BOOL)hasUnverifiedListing;	// 0x32b95159
- (id)imageAtIndex:(unsigned)index;	// 0x32b96d1d
// declared property getter: - (id)images;	// 0x32b95239
// declared property getter: - (int)imagesCount;	// 0x32b96de9
// declared property getter: - (BOOL)inexactPosition;	// 0x32b95199
// declared property getter: - (id)kmlInfo;	// 0x32b95249
// declared property getter: - (int)locationSource;	// 0x32b951b9
// declared property getter: - (id)mapsUrl;	// 0x32b95219
// declared property getter: - (id)name;	// 0x32b952e9
// declared property getter: - (id)phone;	// 0x32b952b9
// declared property getter: - (id)queryRefinementString;	// 0x32b951f9
// declared property getter: - (id)rating;	// 0x32b951e9
- (BOOL)readFrom:(id)from;	// 0x32b96605
- (id)referenceAtIndex:(unsigned)index;	// 0x32b96e3d
// declared property getter: - (id)references;	// 0x32b95299
// declared property getter: - (int)referencesCount;	// 0x32b96f09
// declared property getter: - (BOOL)sesameDetailsEditable;	// 0x32b95129
// declared property getter: - (BOOL)sesameEditable;	// 0x32b95149
// declared property getter: - (id)sesameFeatureId;	// 0x32b95109
// declared property setter: - (void)setAdInfo:(id)info;	// 0x32b97565
- (void)setAddressLine:(id)line atIndex:(unsigned)index;	// 0x32b970e1
// declared property setter: - (void)setAddressLines:(id)lines;	// 0x32b973d5
// declared property setter: - (void)setAttributionText:(id)text;	// 0x32b97475
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x32b9749d
// declared property setter: - (void)setCid:(unsigned long long)cid;	// 0x32b94fd1
// declared property setter: - (void)setClosedListing:(BOOL)listing;	// 0x32b950bd
// declared property setter: - (void)setDirectionsPlacemarkToken:(id)token;	// 0x32b9762d
- (void)setEnhancedContent:(id)content atIndex:(unsigned)index;	// 0x32b96fc1
// declared property setter: - (void)setEnhancedContents:(id)contents;	// 0x32b97425
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x32b973ad
- (void)setImage:(id)image atIndex:(unsigned)index;	// 0x32b96d81
// declared property setter: - (void)setImages:(id)images;	// 0x32b974ed
// declared property setter: - (void)setInexactPosition:(BOOL)position;	// 0x32b95011
// declared property setter: - (void)setKmlInfo:(id)info;	// 0x32b974c5
// declared property setter: - (void)setLocationSource:(int)source;	// 0x32b94ff5
// declared property setter: - (void)setMapsUrl:(id)url;	// 0x32b9753d
// declared property setter: - (void)setName:(id)name;	// 0x32b97385
// declared property setter: - (void)setPhone:(id)phone;	// 0x32b973fd
// declared property setter: - (void)setQueryRefinementString:(id)string;	// 0x32b9758d
// declared property setter: - (void)setRating:(id)rating;	// 0x32b975b5
- (void)setReference:(id)reference atIndex:(unsigned)index;	// 0x32b96ea1
// declared property setter: - (void)setReferences:(id)references;	// 0x32b9744d
// declared property setter: - (void)setSesameDetailsEditable:(BOOL)editable;	// 0x32b95079
// declared property setter: - (void)setSesameEditable:(BOOL)editable;	// 0x32b9505d
// declared property setter: - (void)setSesameFeatureId:(id)anId;	// 0x32b97605
// declared property setter: - (void)setShowIcon:(BOOL)icon;	// 0x32b94f15
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x32b975dd
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x32b97515
// declared property setter: - (void)setType:(int)type;	// 0x32b95309
// declared property setter: - (void)setUnverifiedListing:(BOOL)listing;	// 0x32b95041
// declared property getter: - (BOOL)showIcon;	// 0x32b95289
// declared property getter: - (id)streetViewPanoId;	// 0x32b95179
// declared property getter: - (id)structuredAddress;	// 0x32b95229
// declared property getter: - (int)type;	// 0x32b952f9
// declared property getter: - (BOOL)unverifiedListing;	// 0x32b95169
- (void)writeTo:(id)to;	// 0x32b95dc5
@end

