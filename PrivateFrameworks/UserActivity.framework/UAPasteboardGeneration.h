/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAPasteboardGeneration : NSObject {
    NSSet * _allTypes;
    unsigned int  _generation;
    NSArray * _items;
}

@property (nonatomic, copy) NSSet *allTypes;
@property (nonatomic, readonly) unsigned int generation;
@property (nonatomic, copy) NSArray *items;

- (void).cxx_destruct;
- (BOOL)addItem:(id)arg1;
- (BOOL)addType:(id)arg1 toItemAtIndex:(unsigned int)arg2;
- (id)allTypes;
- (unsigned int)generation;
- (id)initWithGeneration:(unsigned int)arg1;
- (id)items;
- (void)setAllTypes:(id)arg1;
- (void)setItems:(id)arg1;

@end
