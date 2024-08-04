package tree_sitter_uxn_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-uxn"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_uxn.Language())
	if language == nil {
		t.Errorf("Error loading Uxn grammar")
	}
}
