/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributeTuple : TSPObject <NSCopying> {
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    BOOL _definedAttributeValue;
    BOOL _definedBuildChunkIdentifier;
    BOOL _definedBuildId;
    NSString *_property;
}

@property (nonatomic, readonly) KNBuild *build;
@property (nonatomic, readonly) KNBuildChunk *chunk;
@property (nonatomic, readonly) BOOL isBuildTuple;
@property (nonatomic, readonly) BOOL isChunkTuple;
@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) KNBuildAttributeValue *value;

+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 referent:(unsigned int)arg2;

- (id)build;
- (id)chunk;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (BOOL)isBuildTuple;
- (BOOL)isChunkTuple;
- (BOOL)isValidForSlide:(id)arg1;
- (id)property;
- (id)value;

@end