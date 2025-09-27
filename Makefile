.PHONY: all plugin infoview
all: plugin infoview

plugin:
	cd plugin &&\
lake build &&\
cp .lake/build/lib/libServerPlugin.so ../data/libServerPlugin.so

infoview:
	cd infoview &&\
npx rsbuild build &&\
rm -r ../data/infoview &&\
cp -r dist ../data/infoview
